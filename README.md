## WW Migrate Drupal

This module provide a solution to import data from Drupal 7 to Drupal 8.
When your import is completed, disable the WW Migrate Drupal module into the Drupal 8 Backend.

### How to use it ?

- Enable the ```WW Migrate Drupal``` inside the Drupal 8 Backend.
- Use your terminal and go to your root Drupal 8 folder with the command line : ```cd```.
- Create and import your Drupal7 database.
- Launch the script with drush : ```drush import:drupal```.

### What does this module ?

- From drush, connect to your Wordpress database.
- Prepare all users.
- Import this users to Drupal 8.
- Prepare all content from a specific content type.
- Import this content to Drupal 8.
- Import all images link to your content.

### Fields imported to Drupal 8 for a user

- Username
- Email
- Language
- Creation date
- Timezone
- Roles
- Custom fields

### Fields imported to Drupal 8 for a content type

- Title
- Body
- Image
- Creation date
- Taxonomy
- Language
- Link
- Custom fields
- Author

### Want to help me to improve this module ?

Fork the project and ask a pull request or send me a private message.
