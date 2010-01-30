Copy and paste the folloing code, to download and enable the required modules 
using Drush.

# Download modules.
drush dl flag-flag 6.x-2.x-dev rules cck features content_profile ubercart  
drush dl context-6.x-3.0-alpha2 ctools strongarm-6.x-2.0-beta3

# Enable modules
drush en flag rules_admin features text nodereference content_permissions 
drush en php ca uc_cart uc_order uc_product uc_store content_profile ctools 
drush en strongarm context_ui
