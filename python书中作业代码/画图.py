import numpy as np
import matplotlib.pyplot as plt

import pandas as pd
x = np.random.randn(1000)
D = pd.DataFrame([x,x+1]).T
D.plot(kind = 'box')
plt.show()
