Copy and paste the folloing code, to download and enable the required modules 
using Drush.

# Download modules.
drush dl flag rules cck features content_profile ubercart ctools strongarm 
drush dl context-6.x-3.0-alpha2

# Enable modules
drush en flag rules_admin features text nodereference content_permissions 
drush en php ca uc_cart uc_order uc_product uc_store content_profile ctools 
drush en strongarm context_ui
