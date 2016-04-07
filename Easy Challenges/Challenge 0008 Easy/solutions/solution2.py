song_lines = ['{0} bottles of beer on the wall, {1} bottles of beer, you take one down and pass it around,{2} bottles of beer on the wall!'.format(i,i, i-1) for i in reversed(range(0,100))]
print ','.join(str(i) for i in song_lines)
