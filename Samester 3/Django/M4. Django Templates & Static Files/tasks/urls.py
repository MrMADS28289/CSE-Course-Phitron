from django.urls import path
from tasks.views import tasks

urlpatterns = [
   path("task/", tasks)
]
