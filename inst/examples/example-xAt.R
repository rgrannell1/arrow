
# 1. Create a new positional selector

xFifthOf <- xAt(5)

# 2. Use xAt to get the values from a xGroupBy

x__('lamp', 'screen', 'cable', 'mouse') $ xGroupBy(xCharsOf) $ x_Map(xAt(2))

# however, xSecondOf is preferred here.

x__('lamp', 'screen', 'cable', 'mouse') $ xGroupBy(xCharsOf) $ x_Map(xSecondOf)

# and as of v0.78.0 you should just do.

x__('lamp', 'screen', 'cable', 'mouse') $ xAmassBy(xCharsOf)
