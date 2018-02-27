import csv,os, sys, json, io

def getColumnFor(colName, row):
	index = 0
	for thisName in row:
		if thisName.strip() == colName.strip():
			return index
		else:
			index +=1		
	return index

def writeObjectiveToOutfile(key, val):
	parsed_json = {}
	if os.path.isfile(objectivesFile):
		json_data = open(objectivesFile)
		parsed_json = json.load(json_data)
	parsed_json[key] = val
	dataString = json.dumps(parsed_json, sort_keys=True,indent=4, separators=(',', ': '))
	with io.open(objectivesFile, 'w', encoding='utf-8') as f:
   		f.write(unicode(dataString))

resultsFileName = "results.csv"
resultsFile = sys.argv[1] + os.path.sep + resultsFileName
objectivesFileName = "objectives.json"
objectivesFile = sys.argv[1] + os.path.sep + objectivesFileName
objectiveName = sys.argv[2]
scenarioDataFolder = sys.argv[3]
csvfile = open(resultsFile)
csvdata = csv.reader(csvfile, delimiter=',')

levelColumnID = sys.argv[4]
targetLevel = float(sys.argv[5])

cumulativeDeviation = 0.0
levelColumn = 0
stepSizeColumn = 0
firstRow = True

for row in csvdata:
	if firstRow:
		levelColumn = getColumnFor(levelColumnID, row)
		stepSizeColumn = getColumnFor('step-size', row)
		firstRow = False
	else:
		level = float(row[levelColumn])
		stepSize = float(row[stepSizeColumn])
		cumulativeDeviation += abs ((level - targetLevel)*stepSize)

writeObjectiveToOutfile(objectiveName,cumulativeDeviation)




