##Estee Lauder Learning Experience website (ELX)

This document is a working set of notes to better understand the requirements and prepare for the development
of the new ELX (Estee Lauder Learning Experience) website. It is intended for developers to get them
up to speed on what the project technical details are as we define them.

The site will be developed with the combination of packages that are Drupal 7 and MEAN stack architecture.
Drupal will be used on the back end of the site to lean into the strengths of our team being able to quickly
build a site model with the users, roles, groups, permissions, and internationalization that is needed to pull
off a website for an international (global leader) Estee Lauder. We will push content from the backend when the
content changes (update or create). The push method is the 'mean' drupal module which includes a listener for
entities that are created, and then using the 'mean-shadow' module it will push content to the  front end MEAN stack (into MongoDB).

Then it can be used locally on the front end to provide a responsive and fast site experience once the user has
selected content to view (watch, listen to, etc). This is going to be a MEAN stack (or some portion of it)
where local routes (for example /users) are defined and information between the user experience materials and
a MongoDB database is used.


The overall look of the site will be something people are referring to as 'Magazine Look' website, or
<https://www.esteelauder.com/account/beauty_feed.tmpl> is a good example of  what they have already from
which to start a conversation. Also useful to point out the look of site <https://www.yahoo.com/beauty> site,
since it has a familiar look we are heading  towards (unless our creatives whips us up some new awesome sauce).

##Estee Lauder Website Information

Estee Lauder Information from web sites visits and reading EL materials:


Here is some basic research by visiting the <www.esteelauder.com> website:


**Best selling products (Estee Lauders Top Ten)**

1. Advanced Night Repair Synchronized Recover Complex II
2. Advanced Night Repair Eye Serum Infusion
3. Perfectionist[CP+R] Wrinkle Lifting/Firming Serum
4. Idealist Even Skintone Illuminator
5. Resilience Lift Firming/Sculpting Face and Neck Cream SPF 15
6. Double Wear Stay in Place Makeup
7. Pure Color Eyeshadow
8. Sumptuous Extreme Lash Multiplying Volume Mascara
9. Pure Color Envy Sculpting Lipstick
10. Modern Muse

**Estee Edit**

is an area in the website (main menu material) where they do traditional marketing
materials in a blog-style show and tell of lifestyle, health and fashion. For example
one of the stories was an interview with the two women who founded bonberi.com
(Vanessa Packer and Nicole Berrie) and they speak about how they met, their common
interests in working out, eating well, and living life well. Some of this to a lot of this
will be used for Pulsed Content (like Beth’s Blog, etc).


The overall feel for the website is that Estée Lauder sells beauty products that are for
skincare, makeup, fragrance, re-nutriv, Aerin, best-sellers, and Este Edit.


There is a book for Beauty Advisors **_Beautiful Start_**

It has inside it the:

My Beautiful Start Learning Plan
(where BA's complete within the first month at Estee Lauder)
This will be a blueprint for us to use as how to it to create the online certification project.

**My Estee Lauder Purpose**

I help every woman
look and feel
her most beautiful
by providing
a personalized
experience
and recommending
the best products
for her




From the IA perspective, here are the thoughts that are being formed (Daniel, Dan, and I are shaping these
in working sessions) :

<http://a1n17w.axshare.com/>

pwd: EsteeL

##Content Objects

Each content Object will be comprised of four pieces:

1. Headline - (Product Name) objective specific and attention-getting  - approx. 80 characters
2. Introduction - (If She Asks, Share) Summary of objectives in content - approx. 350 characters
3. Detail - (NewPlayerv2 content) container for many type of learning content, stories, videos, games, etc
4. Assessment - (Future Phase) questions/answers, outcome of games, etc.

There will be an outer wrapper of these elements outside the three primary defined objects which are:

1. Product Library*
2. Learning Segments* (aka Learning Segments or Learning Objects)
3. Stories* (aka Articles and formerly known as Pulsed Content)*

The * refers to the fact that there will be either Comments and/or Favorites associated with Content Objects.
Favorites are usually referred to by a heart symbol. We have defined the system to work with a simple model,
namely comments and favorites tracked for Products, Stories, and Learning Segments.
At some point in the future, we can integrate the cel.ly technology which would require using their API.


Each of these three objects will be represented and played inside NewPlayerV2.

Consult the wireframe axshare model <http://a1n17w.axshare.com/> for more details and beware of the
aka points mentioned above.

Each of these actions above may be defined in the Google Analytics KPI which Jeff Bedford is writing.
It is assumed that the NewPlayerV2 will be able to help us track the progress a user makes through
our Content Objects listed above (LS, PP, PC, S, ED), but we may have to rely on GA for events
that are not tracked by our NewPlayerV2.


(some of these details are changing quickly, updates will follow when they are defined)


**Learning Segment** (*Social)

* has it's own landing page/launch page
* need to track the progress through either a video, multi-page view, or questions
* and answers
* the performance as measured in a correct percentage (Phase 1 100%, only)
* point awarded for completion of the task
* a history of every Learning Segment attempted/finished with scores, if applicable
* tracking a trending Learning Segment
* track a favorite Learning Segment
* the number of times an item has been opened

**Product Page**

* has a single product page with grid of products
* each can be clicked on and either modally seen in more detail or landing page for each product
* we will track the number of times the multi-product page has been landed on
* we will track the number of times each product detail page has been landed on
* we will attempt to award points for the first time a user has even visited the page
* can we tell the last time a visitor has been on the page, or individual page (other than GA) ?


**Stories** (aka Articles and formerly known as Pulsed Content) (*Social)

* has a separate landing page for each item of pulsed content
* will need to track survey questions and progress of content experience
* will need to track whether they have completed the content piece
* no need track performance, these are survey opinions, so no correct answers
* points are awarded for completion of the content
* define and track trending pulsed content
* track favorites for PC
* track times PC was opened or visited

**Search**

* the result of a search will take you to a search landing page
* each item on the search landing page is linked

**Explore Dashboard**

* when a user clicks on the dashboard link, they are taken to a dashboard landing page (see Daniels rendition)

Each of these actions above may be defined in the Google Analytics KPI
which Jeff Bedford is writing. It is assumed that the NewPlayerV2 will
be able to help us track the progress a user makes through our Content
Objects listed above (LP, PP, PC, S, ED), but we may have to rely on GA
for events that are not tracked by our NewPlayerV2.


We did a proof of concept for pushing down translated content via the
mean-shadow module and it worked fine.  Additional testing was done to
make sure the images also were uploaded and defined in the correct
languages and pushed down as well.


##Data Flow

The strategy for creating data, data flow, and where data lives can be outlined as follows:

All data will be 'born' on the Drupal server, with admins being able to upload images, movies,
and documents via the Drupal back-end admin interface.  We would like to use the zencoder service
to transcode the movies, rather than place this burden on Estee Lauder or ourselves as it is time consuming.
(learned today that we will receive movies from EL, and convert them to mp4 ourselves).

The primary types of entities created are:

Users
Products
Content Objects

##Users

The Users will be created with a bulk batch import of Excel spreadsheets given to us by Estee Lauder and
will cover the following regions to start (and we will use the 2 letter version for import):

####User Regions

1. APAC - Asia Pacific
2. NOAM - North America
3. EMEA - Europe/Middle East/Africa
4. LATAM - Latin America
5. TRA - Travel Retail America
6. TRAPAC - Travel Retail Asia Pacific
7. TREMEA - Travel Retail Europe/Middle East/Africa

Users will also have roles assigned to them from the following types or **Learner Groups**:

1. Beauty Advisor
2. Counter Manager
3. Multi-Brand Sales Associate
4. Field and Brand Management
5. EL Regional Market Admin
6. EL NYO Global Education System Admin

The beauty advisor is the person responsible for selling the Estee Lauder Product
line and will be typically found in a store like Nordstroms or Macys. Their primary responsibility
is to educate the customer about the EL product line and is based on the detailed information
found within the book _Beautiful Start_. A certification program for BA's is detailed in this book.

The counter manager is the direct supervisor of the Beauty Advisor and will both assist them in
their understanding of EL products and suggest additional reading materials to them. They will also
in future Phases of the ELX have suggested content for Beauty Advisors.

The rest of the above Users of the system will is defined in Daniels documentation for

####Regions/Market Names

Regions and Market Names :

|Asia Pacific|Code|
|-----------------------|-|
|Australia             |AU|
|China                 |CN|
|Hong Kong             |HK|
|Japan                 |JP|
|Korea                 |KR|
|Malaysia              |MY|
|New Zealand           |NZ|
|Singapore             |SG|
|Taiwan                |TW|
|Thailand              |TH|
|Vietnam               |VN|
|Indonesia             |ID|
|Philippines           |PP|

|North America|Code|
|-----------------------|-|
|United States         |US|
|Canada                |CA|
|Puerto Rico           |PR|
|Fashion Group         |FG|

|Europe/Middle East/Africa|Code|
|------------------------|-|
|Austria                       |AT|
|Belgium                       |BE|
|Netherlands                   |NL|
|Czech Republic                |CS|
|France                        |FR|
|Germany                       |GM|
|Greece                        |GR|
|Hungary                       |HU|
|Israel                        |IL|
|India                         |IN|
|Italy                         |IT|
|Nordic                        |DK|
|Finland                       |FI|
|Adriatic                      |AD|
|Poland, Lituania, Estonia, Latvia|PL|
|Russia                        |RU|
|South Africa                  |ZA|
|Spain                         |SP|
|Switzerland                   |CH|
|United Kingdom                |UK|
|Turkey                        |TR|
|Bulgaria                      |BG|
|Romania                       |RM|
|Cyprus                        |CY|
|Middle East                   |AE|
|Portugal                      |PT|

|Latin America|Code|
|-------------------------|-|
|Southern Cone - Chile, Peru, Argentina |SC|
|Mexico                                 |MX|
|Venezuela                              |VE|
|CECA MARKETS - Colombia, Ecuador and Central America   |CECA|

|Travel Retail Americas   |Code|
|-------------------------|-|
|TR Americas, South, Central America & Mexico |TRAM-SCM|
|TR Americas, Caribbean & Cancun              |TRAM-CC|
|TR Americas, North America                   |TRAM-NA|

|Travel Retail Asia Pacific                 |Code|
|-------------------------------------------|-|
|TR Hong Kong, Taiwan, Macau |TRAPAC-HMT|
|TR China                    |TRAPAC-CN|
|TR Singapore                |TRAPAC-SG|
|TR Thailand                 |TRAPAC-TH|
|TR Malaysia                 |TRAPAC-MY|
|TR Japan                    |TRAPAC-JP|
|TR Mid-Pac                  |TRAPAC-MP|
|TR Korea                    |TRAPAC-KR|
|TR Oceania                  |TRAPAC-SEA|

|Travel Retail Europe/Middle East/Africa|Code|
|---------------------------------------|-|
|TR Europe, Mid-East, Africa|TREMA|

The following fields will define our User model imported from EL Excel spreadsheets :

- email - Email
- firstname - First Name
- lastname - Last Name
- employeeid - Employee ID    (formerly employer number)
- position - Position (formerly job title)
- learnergroup - Learner Group
- accountname - Account Name
- door - Door    (formerly store/counter name)
- city - City
- state - State
- country - Country
- region - Region
- language - Language
- marketname - Market Name (formerly Market Code)
- hiredate - Hire Date
- avatar - Avatar (Image) /sites/default/files/users/avatars
- password - Password
- countermanager - Counter Manager
- educationmanager - Education Manager/Executive
- accountexecutive - Account/Field Executive

These additional fields are needed to track users and aside from 'password' and 'creationdate' are not populated on drupal user creation :

_id - mongo specific id
level - Level (current)
rank - Rank
creationdate - Creation Date
modificationdate - Modification Date
lastaccessdate - Last Accessed Date

User schema:

```javascript
var UserSchema = new Schema ({
  email : {type: String, required: true, unique: true},
  firstname : {type: String},
  lastname : {type: String},
  employeeid : {type: Number},
  position : {type: String},
  learnergroup : {type: String},
  accountname : {type: String},
  language : {type: String},
  door : {type: String},
  city : {type: String},
  state : {type: String},
  country : {type: String},
  region : {type: String},
  marketname : {type: String},
  hiredate : {type: Date},
  countermanager : {type: String},
  educationmanager : {type: String},
  accountexecutive : {type: String},
  level : {type: String},
  rank : {type: String},
  creationdate : {type: Date},
  modificationdate : {type: Date},
  lastaccessdate : {type: Date},
  avatar : {type: String},
  password : {type: String}
  });
```

##Products

The following fields will define a Product in our system:

- productname
- categories (there are 6, listed above)
- season (for example, Winter 2014)
- tags (aka keywords to match, csv format)
- whytheresonly1
- demonstration
- benefits
- ifsheasksshare
- perfectpartners
- relatedproducts (csv format)
- story
- customerquestions
- fullfactsheet (pdf file link)
- image (an url reference to local image file)
- price (not currently used, but likely needed for future phase)
- manifest (reference node id to get the light data package for NewPlayerV2 content)



Products schema:

```javascript
var ProductSchema = new Schema ({
  productname : {type: String, required: true, unique: true},
  tags : {type: String},
  categories : {type: String},
  seasonlaunched : {type: String},
  whytheresonly1 : {type: String},
  demonstration : {type: String},
  benefits : {type: String},
  ifsheasksshare : {type: String},
  relatedproducts : {type: String},
  perfectpartners : {type: String},
  story : {type: String},
  customerquestions : {type: String},
  fullfactsheet : {type: String},
  image : {type: String},
  price : {type: String},
  manifest : {type: String}
  });
  ```

##Favorites

Since each Product, Learning Segment, and Story can have Comments or Favorites
attached to them we need to define how these are tracked in our system.
Favorites are request entities.

- We can search for favorites by either user or type or specific favorite id

- From the dashboard we will ask for the users favorites

- From a Learning Segment, story, or product we ask for the number of favorites for that entity

/favorites/:userid  - will return all favorites for a given user with _id
/favorites/:email  - will return all favorites for a given user with email
/favorites/learning - will return total number of learning favorites
/favorites/story - will return total number of story favorites
/favorites/product - will return total number of product favorites
/favorites/:userid|:email/:limit  - paginated favorites by userid or email

Favorites schema:

```javascript
var FavoriteSchema = new Schema ({

  userid : {type: String, required: true, unique: true},
  favoriteid : {type: String, required: true}
  });
  ```
- userid - who favored the content entity
- favoriteid - _id of the content entity

##Favor

Favor is the route we use to set the value of a favorite for a user.
It uses the same db object as the FavoriteSchema.

/favor/:learning/:userid  - sets a favorite item for a learning
/favor/:story/:userid  - sets a favorite item for a story
/favor/:product/:userid - sets a favorite item for a product

##Comments

We can search for comments by either user id or Learning Segment, Story, or Product id to get the list of comments.
We will use the user id in a profile call, but mainly the comment requests will come from a learning, story, or product
page to list the comments at the bottom of the page in accordion fashion.

/comments/:userid
/comments/:learning
/comments/:story
/comments/:product
/comments/:id|user/:limit
/comments/:learning|:story|:product/:limit

Comment schema:

```javascript
var CommentsSchema = new Schema ({

  userid : {type: String, required: true},
  favoriteid : {type: String, required: true}
  comment : {type: String, required: true}
  });
  ```

- _id = unique comment id
- userid - who commented on  the content entity
- entityid - _id of the comment entity to favor
- comment - the comment text


##Comment

To create a comment for a learning segment, story, or product

/comment/:learning/:userid
POST data: comment text

/comment/:story/:userid
POST data: comment text

/comment/:product/:userid
POST data: comment text

##Actions

To track more user activities like the opening of Products or Content Objects
we create a database entity, Actions to help us out.

/actions/open/:userid/:contentid
/actions/complete/:userid/:contentid
/actions/score/:userid/:contentid

```javascript
var ActionsSchema = new Schema ({

  userid : {type: String, required: true},
  contentid : {type: String, required: true},
  action : {type: String, required: true},
  score : {type: String},
  timestamp : {type: Date},
  });
  ```

- _id = unique action id
- userid - who performed the action
- contentid - id of the content entity

  (at launch will only be an id of these types and based on contentid)
  product, re-nutriv, advanced night repair, greet, meet, treat, complete

- action - the action user performed
  1. open
  2. complete
  3. score

- timestamp

##Surveys

To track surveys that users can alternatively take at the end of a learning plan
but will not be a part of the learning object itself we need a way to create both the questions
and answers and capture all user progress through the survey. It will be another Content Object
type and for at least phase 1, will have questions and answers contained in the same object.

/surveytracking/begin/:id:sid  - note the start of the survey with userid, surveyid, and timestamp
/surveytracking/end/:id:sid  - not the end of the survey with userid, surveyid (update or not timestamp)
/surveytracking/record/:id:sid - write the entire survey with Q's and A's to the database.
/surveytracking/assess/:id:sid - get the entire survey with given userid (and survey id?)

```javascript
var SurveyTrackingSchema = new Schema ({
  userid : {type: String, required: true},
  surveyid : {type: String, required: true},
  action : {type: String, required: true},
  progress : {type: String},
  timestamp : {type: Date},
  });
  ```

- action - the action user performed
  1. begin
  2. end
  3. record
  4. assess

/survey/create/:id:sid - write the survey to the database
/survey/update/:id:sid - update the survey in the database



```javascript
var SurveysSchema = new Schema ({
  userid : {type: String, required: true},
  surveyid : {type: String, required: true},
  surveycontents : {type: String, required: true},
  timestamp : {type: Date},
  });
  ```

- surveycontents - pointer to a manifest (which is a content object for the survey) that has been filled out
- timestamp - when a survey is created or updated the timestamp changes


##Points

When a user completes a Learning Content piece, Content Activity, or Comments (for the first time) they are awarded points.
A future phase will include the scenario that when a user finishes a Level they will be awarded points.
If a user has enough points, they are given Rewards. Initially these rewards are Badges.
At launch of site the Leaderboard will have a list of Users
(the elx_conceptual_model_v2.png shows Rewards linking to the Leaderboard) with point totals of 0.
So we always are showing something in our LeaderBoard location.
From our 14-ESTL-005_Points_Logic_v2_r3.xlsx document (author Jeff Bedford) we have the following
activities which will be awarded with points:

|Action|					Cadence|		Limit|		Base Point Value|
|:-------------------------|
|**General Activities**||||
|User Creates Account| 			first time only|		once ever|	500|
|Anniversary|				once yearly|		none|		1000|
|**Story Activities**||||
|Post Comment|				every time|		none|		10|
|Open Content|				first time per piece|	once per piece|	50|
|**Learning Content Activities**||||
|Post Comment|				every time|		none|		10|
|Open Content|				first time per piece|	once per piece|	50|
|Complete Content|			every time|		once per piece|	400|

The logic to trigger these point rewards will come from within the NewPlayerv2 for the Story
and Learning Content Activities for Opening and Completing Content. The point rewards for
posting comments will be emitted from the angular app since it is responsible for retrieving
and posting comments using the /comments route.

##Drupal and MEAN shadow module installation

Our backend CMS system, Drupal, will handle the content creation part of our website.
The data can be divided in two parts, the images and movies that feed the front end
angular side, and the entity creation for consumption by the NewPlayerV2.

The images and movies will be uploaded through Drupal, and will live in the file system
as static assets as is typical of Drupal. More information will be given when we have  defined
all paths, but a typical path is ```sites/default/files```. This file structure will be rsync'd
from the Drupal server to the MEAN stack environment for use.

The Content Objects (Stories, Products, Learning Segments) and Users will be created with the admin interface
in Drupal and delivered upon creation or update of these objects to the MEAN stack via the
MEAN Shadow module, <https://www.drupal.org/project/mean> Download and install the mean module, and after
installation, patch the Drupal mean env in this order:

1. ```vars_in_mean_packets-2165419.patch```
2. ```refactor-2294171-3.patch```
3. ```security_issue-2168017.patch```

Create a MEAN Client

ON MEAN:

1. Generated a mean.io stack alla: <http://mean.io/>
2. Within the generated app, add the following snippet to:
    - ```MEANROOT/packages/system/app.js```
    - At line #17 Just after:  System.register(function(app, auth, database) { etc. etc...
3. SNIPPET TO ADD:
```javascript
      /* -------
        Add mean-shadow support
          alla: https://www.npmjs.org/package/mean-shadow
          This is meant to compliment the mean-shadow drupal modules work
          that is sending in content from the drupal side. */
      var options = {
        disableAuth: true, // NOTE: I suspect this boolean is doing the opposite
        authMiddleware: auth.myNewAuthMiddleware
      };
      var meanShadow = require('mean-shadow')(app, options);
      // -------```
4. Start your meanio install via terminal from mean root with: ```grunt -f```

5. From the grunt console log, you can see content being inserted as a user or node type.

If Creative Few won't be using the ```mean.io``` module as a base, use this code where it will be
appropriate to catch the mean-shadow events.

##Addendum to Documentation

The following country codes are the ones that Drupal will use:

|Country Codes  |Names|
|:--------------|-|
|AC|Ascension Island|
|AD|Andorra|
|AE|United Arab Emirates|
|AF|Afghanistan|
|AG|Antigua and Barbuda|
|AI|Anguilla|
|AL|Albania|
|AM|Armenia|
|AN|Netherlands Antilles|
|AO|Angola|
|AQ|Antarctica|
|AR|Argentina|
|AS|American Samoa|
|AT|Austria|
|AU|Australia|
|AW|Aruba|
|AX|Åland Islands|
|AZ|Azerbaijan|
|BA|Bosnia and Herzegovina|
|BB|Barbados|
|BD|Bangladesh|
|BE|Belgium|
|BF|Burkina Faso|
|BG|Bulgaria|
|BH|Bahrain|
|BI|Burundi|
|BJ|Benin|
|BL|Saint Barthélemy|
|BM|Bermuda|
|BN|Brunei|
|BO|Bolivia|
|BQ|Caribbean Netherlands|
|BR|Brazil|
|BS|Bahamas|
|BT|Bhutan|
|BV|Bouvet Island|
|BW|Botswana|
|BY|Belarus|
|BZ|Belize|
|CA|Canada|
|CC|Cocos [Keeling] Islands|
|CD|Congo - Kinshasa|
|CF|Central African Republic|
|CG|Congo - Brazzaville|
|CH|Switzerland|
|CI|Côte d’Ivoire|
|CK|Cook Islands|
|CL|Chile|
|CM|Cameroon|
|CN|China|
|CO|Colombia|
|CP|Clipperton Island|
|CR|Costa Rica|
|CU|Cuba|
|CV|Cape Verde|
|CW|Curaçao|
|CX|Christmas Island|
|CY|Cyprus|
|CZ|Czech Republic|
|DE|Germany|
|DG|Diego Garcia|
|DJ|Djibouti|
|DK|Denmark|
|DM|Dominica|
|DO|Dominican Republic|
|DZ|Algeria|
|EA|Ceuta and Melilla|
|EC|Ecuador|
|EE|Estonia|
|EG|Egypt|
|EH|Western Sahara|
|ER|Eritrea|
|ES|Spain|
|ET|Ethiopia|
|FI|Finland|
|FJ|Fiji|
|FK|Falkland Islands|
|FM|Micronesia|
|FO|Faroe Islands|
|FR|France|
|GA|Gabon|
|GB|United Kingdom|
|GD|Grenada|
|GE|Georgia|
|GF|French Guiana|
|GG|Guernsey|
|GH|Ghana|
|GI|Gibraltar|
|GL|Greenland|
|GM|Gambia|
|GN|Guinea|
|GP|Guadeloupe|
|GQ|Equatorial Guinea|
|GR|Greece|
|GS|South Georgia and the South Sandwich Islands|
|GT|Guatemala|
|GU|Guam|
|GW|Guinea-Bissau|
|GY|Guyana|
|HK|Hong Kong SAR China|
|HM|Heard Island and McDonald Islands|
|HN|Honduras|
|HR|Croatia|
|HT|Haiti|
|HU|Hungary|
|IC|Canary Islands|
|ID|Indonesia|
|IE|Ireland|
|IL|Israel|
|IM|Isle of Man|
|IN|India|
|IO|British Indian Ocean Territory|
|IQ|Iraq|
|IR|Iran|
|IS|Iceland|
|IT|Italy|
|JE|Jersey|
|JM|Jamaica|
|JO|Jordan|
|JP|Japan|
|KE|Kenya|
|KG|Kyrgyzstan|
|KH|Cambodia|
|KI|Kiribati|
|KM|Comoros|
|KN|Saint Kitts and Nevis|
|KP|North Korea|
|KR|South Korea|
|KW|Kuwait|
|KY|Cayman Islands|
|KZ|Kazakhstan|
|LA|Laos|
|LB|Lebanon|
|LC|Saint Lucia|
|LI|Liechtenstein|
|LK|Sri Lanka|
|LR|Liberia|
|LS|Lesotho|
|LT|Lithuania|
|LU|Luxembourg|
|LV|Latvia|
|LY|Libya|
|MA|Morocco|
|MC|Monaco|
|MD|Moldova|
|ME|Montenegro|
|MF|Saint Martin|
|MG|Madagascar|
|MH|Marshall Islands|
|MK|Macedonia|
|ML|Mali|
|MM|Myanmar [Burma]|
|MN|Mongolia|
|MO|Macau SAR China|
|MP|Northern Mariana Islands|
|MQ|Martinique|
|MR|Mauritania|
|MS|Montserrat|
|MT|Malta|
|MU|Mauritius|
|MV|Maldives|
|MW|Malawi|
|MX|Mexico|
|MY|Malaysia|
|MZ|Mozambique|
|NA|Namibia|
|NC|New Caledonia|
|NE|Niger|
|NF|Norfolk Island|
|NG|Nigeria|
|NI|Nicaragua|
|NL|Netherlands|
|NO|Norway|
|NP|Nepal|
|NR|Nauru|
|NU|Niue|
|NZ|New Zealand|
|OM|Oman|
|PA|Panama|
|PE|Peru|
|PF|French Polynesia|
|PG|Papua New Guinea|
|PH|Philippines|
|PK|Pakistan|
|PL|Poland|
|PM|Saint Pierre and Miquelon|
|PN|Pitcairn Islands|
|PR|Puerto Rico|
|PS|Palestinian Territories|
|PT|Portugal|
|PW|Palau|
|PY|Paraguay|
|QA|Qatar|
|QO|Outlying Oceania|
|RE|Réunion|
|RO|Romania|
|RS|Serbia|
|RU|Russia|
|RW|Rwanda|
|SA|Saudi Arabia|
|SB|Solomon Islands|
|SC|Seychelles|
|SD|Sudan|
|SE|Sweden|
|SG|Singapore|
|SH|Saint Helena|
|SI|Slovenia|
|SJ|Svalbard and Jan Mayen|
|SK|Slovakia|
|SL|Sierra Leone|
|SM|San Marino|
|SN|Senegal|
|SO|Somalia|
|SR|Suriname|
|SS|South Sudan|
|ST|São Tomé and Príncipe|
|SV|El Salvador|
|SX|Sint Maarten|
|SY|Syria|
|SZ|Swaziland|
|TA|Tristan da Cunha|
|TC|Turks and Caicos Islands|
|TD|Chad|
|TF|French Southern Territories|
|TG|Togo|
|TH|Thailand|
|TJ|Tajikistan|
|TK|Tokelau|
|TL|Timor-Leste|
|TM|Turkmenistan|
|TN|Tunisia|
|TO|Tonga|
|TR|Turkey|
|TT|Trinidad and Tobago|
|TV|Tuvalu|
|TW|Taiwan|
|TZ|Tanzania|
|UA|Ukraine|
|UG|Uganda|
|UM|U.S. Outlying Islands|
|US|United States|
|UY|Uruguay|
|UZ|Uzbekistan|
|VA|Vatican City|
|VC|Saint Vincent and the Grenadines|
|VE|Venezuela|
|VG|British Virgin Islands|
|VI|U.S. Virgin Islands|
|VN|Vietnam|
|VU|Vanuatu|
|WF|Wallis and Futuna|
|WS|Samoa|
|XK|Kosovo|
|YE|Yemen|
|YT|Mayotte|
|ZA|South Africa|
|ZM|Zambia|
|ZW|Zimbabwe|

