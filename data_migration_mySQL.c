Focus task: Spin up an EC2, RDS mySQL, RDS Aurora, RDS Postgres, migrate dataset between and view completion
Assignment location: "https://s3-us-west-2.amazonaws.com/nyc-loft/Lab2.docx", Lab1, Lab3, Lab4, Lab5
follow the legacy assignments I have from the daka folder


AWSloft event signin: good til 08/03/18 | Account ID: 7853737761276 | IAM UN: student | Pass: Humidity117
*pro tip: If you head to an AWSloft event you can get a current temporary to try this*

AWS ec2 spin basic:
- spin up an EC2 instance
  * navigate to .pem folder
  $ ssh -i iron.pem ec2-user@ec2-18-191-231-103.us-east-2.compute.amazonaws.com
           .pem file         endpoint

mySQL spin basic:
- populate source dataset from homework
  * install mySQL to ec2 instance with yum
  $ mysql -h sql-lab.cgtjdfv3tq7g.us-east-2.rds.amazonaws.com -u gordon -p
             RDS id                                             user     pass

Aurora spin basic
- populate target instance for migration
  * same basic concept
  $ mysql -h sql-aurora.cgtjdfv3tq7g.us-east-2.rds.amazonaws.com -u flash -p
              RDS id                                                user  pass

$
$
$
$
$
$
$
$
$
$
$
$
$
$
$
$
$
$
