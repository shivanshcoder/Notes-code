def convert_number(num):
    try:
        return int(num)
    except ValueError:
        return None

def scan(strings):
        stops = ['the', 'in', 'of', 'from', 'at', 'it']
        directions = ['south', 'north', 'east', 'west', 'down', 'up', 'left', 'right', 'back']
        verbs = ['go', 'kill', 'eat', 'stop']
        nouns = ['bear', 'princess', 'door', 'cabinet']

        strings = strings.split()
        _tuple = []

        for index in range(len(strings)):
            word = strings[index]

            if word in  stops:
                _tuple.append(('stop', word))
            
            elif word in  directions:
                _tuple.append(('direction', word))

            elif word in  verbs:
                _tuple.append(('verb', word))

            elif word in  nouns:
                _tuple.append(('noun', word))
  
            elif word.isdigit():
                _tuple.append(('number', convert_number(word)))

            else:
                _tuple.append(('error', word))

        return _tuple