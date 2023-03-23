# Section 1: Introduction
## 1.1. Getting Started
[[video]](https://drive.google.com/file/d/1kCOnPVOoekTHMceQvOpVtZUasL14T1FU/view?usp=sharing)
[[cc]](https://drive.google.com/file/d/1kWkbSGMPpFio1nPTP7xTcDtZz6rJA7MF/view?usp=sharing)
## 1.2. Helpful information
### Environment:
First 2 chapters are solely with theory, so we're not doing anything practical. After that, if you want to replicate my environment so you can follow along or just test things, you need to take care on a couple of things. There is an article in chapter 4 explaining this more in depth.

### Machine learning:
Now, in this course we're really just using most NLP and Machine Learning concepts without discussing them too much. I try to do an overview in the first chapter, so that you at least have an idea of the field, but really that's just barely scratching the surface. I studied Machine Learning for quite a lot before ending in NLP and doing chatbots. So I myself do have a pretty strong base in the field. Does that mean that you need to have that too? Well, not necessarily, that's why I didn't put it as a requirement either. Because I've used my knowledge to find out and judge which techniques and models are good and can be used to solve different parts of a chatbot. So in my opinion you could build quite a complex chatbot after this.

But, if you will have to work on more specific problems like further analyzing the semantics of the text, or you'll have to find more specific ML models or even build your own, then of course you'll need to have a knowledge base in Machine Learning. For example, one chatbot I've been working on interviews people for jobs. In that scenario, some very custom functionalities appeared and needed to be done, so I had to create and train custom models to get a better accuracy than what I was getting by combining general ones.

So, in the end I think you will feel when you need to know more and when you can do the project with just these basics. If you want help with deciding what to study or what to use, don't hesitate to contact me, I'm happy to point you in the right direction (even if that will mean it's not this course).

#### Disclaimer:
I'm using quite a few of Google's services in my course. (GCP for cloud hosting, though you can use anything here, plus Google's Translation, Speech-to-text and Text-to-speech). But I'm in no way affiliated to them or sponsored by them. I simply use these services  because this is what I think it's best to use for a beginner that offers good functionality with a very accessible start (and some of them free just for testing). There are of course dozens of API's similar to Google's Translation, or Speech recognition. So you are free to try and use anything else here. The principle in using them will be the same.

# Section 2: NLP Fundamentals
## 2.1. NLP Basics
[[video]](https://drive.google.com/file/d/1kudLmvtlFHrgD6U87aCr7cfWecLLavTg/view?usp=sharing)
[[cc]](https://drive.google.com/file/d/1l5NQ3dJsxqnLcTyAmlUzPi6T7JvfnN3j/view?usp=sharing)
## 2.2. Intents
[[video]](https://drive.google.com/file/d/1l1j-XHuJqwCNC76IELF4Xy0ac0i9PVN3/view?usp=sharing)
[[cc]](https://drive.google.com/file/d/1lI4RL3XH1QoB6RhoFpsB6fmzQ9lokGZp/view?usp=sharing)
## 2.3. Entities
[[video]](https://drive.google.com/file/d/1l7yxlDlH7P8X89JXYNnYeSmrriWtu5tA/view?usp=sharing)
[[cc]](https://drive.google.com/file/d/1lMDeKDLef4DhRzpvOJI1rhQ0fEf-VYPQ/view?usp=sharing)
## 2.4. Available resources
[[video]](https://drive.google.com/file/d/1lIfMJpp3USIiIc4c0fbZXYXxwzUCYgaf/view?usp=sharing)
[[cc]](https://drive.google.com/file/d/1lPz8lIvLlIfbhwZfR8w198GKhL2NGvoz/view?usp=sharing)

# Section 3: Chatbot Fundamentals
## 3.1. What are chatbots
[[video]](https://drive.google.com/file/d/1lRuk1SRX-naC_vUcibg6mI2TpCquuvKi/view?usp=sharing)
[[cc]](https://drive.google.com/file/d/1lYBS5NZhMI9RY0CMeQr73XMJ2Bx5Q1GW/view?usp=sharing)
## 3.2. Chatbot examples
[[video]](https://drive.google.com/file/d/1lT31D7uakvA8_uzX1Bol4emUV65uqxfS/view?usp=sharing)
[[cc]](https://drive.google.com/file/d/1lZKkTYXUsuq3R4aeJaFcNNedcyo8cCij/view?usp=sharing)
## 3.3. Conversational chatbots
[[video]](https://drive.google.com/file/d/1lYrVfTW_9L8eUZSo26eVjFiI0ZKRPGc5/view?usp=sharing)
[[cc]](https://drive.google.com/file/d/1lcg7KKVpdqtcVK2_5qSk2VddHQF1nWNL/view?usp=sharing)

# Section 4: Starting our chatbot
## 4.1. Things to always consider
[[video]](https://drive.google.com/file/d/1lzWL0vrFa_QT_ohKqbEWyvlL6dctf4BM/view?usp=sharing)
[[cc]](https://drive.google.com/file/d/1mLZE5zj0qrWqCtwsfhAZ1ffMv37aQXzx/view?usp=sharing)
## 4.2. Proposed bot architecture
[[video]](https://drive.google.com/file/d/1mHw87yrFyybkiJiGVlOzoS3eSaXt0LWx/view?usp=sharing)
[[cc]](https://drive.google.com/file/d/1mTNMuTa5tlfVXNZPsQlAYxyWYU5G4Cel/view?usp=sharing)
## 4.3. Environment setup
[[video]](https://drive.google.com/file/d/1mQj5xpBfEV4TJ7ZWRE9ZgdaywX_beOB5/view?usp=sharing)
[[cc]](https://drive.google.com/file/d/1moF74mBcIE3uuVN7NIsLKh70p-l7zEPD/view?usp=sharing)
## 4.4. Environment details
### Environment details
In the last video I've already explained the more special cases you have to take care of on setting up your environment. (spacy mostly)
I offer 2 ways of installing all the other packages easily, you can use either one:

Pip - attached here is a requirements.txt that you can use to call "```pip install -r requirements.txt```".
Conda - attached here is a conda chatbot_course.yml, that you can use to call "```conda env create -f chatbot_course.yml```"

Besides this, as I said, the instance is really a simple linux instance. You could in theory use mac or windows, only thing that might cause problem in those is that in the last chapter we use ffmpeg to convert audio formats, and that may be harder to install on the other platforms.

As far as computational requirements go, for our bot we use very little. We barely use 1gb of memory, and 1 core is enough. That being said, in a more complex chatbot you can expect to use the large spacy models, plus other ml models loaded in memory, so around 16 and 32gb will be more likely used.

Mostly all big cloud providers offer some sort of free credit, or educational credit, which is usually enough to be able to build a POC of your own and test it. As far as editors go, you're free to go with whatever you want of course.

Lastly, I'll present in the next video how I've used some self-generated credentials to be able to simulate https so I can test my application. That is not used until the voice recognition chapter, so you can change to http till you get there. (we need https because most browsers won't let us use the microphone if we aren't on a https site).

[[requirements.txt]](https://drive.google.com/file/d/1n1-XFUQK32B8fdottR2uY6iJhIArg2iW/view?usp=sharing)
[[chatbot_course.yml]](https://drive.google.com/file/d/1n7zH0kzumuqetcHqpJbxKCNO2dozpinq/view?usp=sharing)

## 4.5. Base code for client & server
[[video]](https://drive.google.com/file/d/1mnSSSfxIfChnISvJ9rxWP93BM4XS8q3r/view?usp=sharing)
[[cc]](https://drive.google.com/file/d/1n8YqmzDMaiJCak_3JfoWWE4OVGKLsbrY/view?usp=sharing)


# Section 5: First intents & entities
## 5.1. Training a Rasa NLU
[[video]](https://drive.google.com/file/d/1lkEgjuEc72hCt0fD9_6PvXZW0qBdGH7F/view?usp=sharing)
[[cc]](https://drive.google.com/file/d/1lo222eZXRfE9-1Yy_hH90L82HA-7CcJE/view?usp=sharing)
[[code]](https://drive.google.com/file/d/1lv-ROD4522jCK4_W2HRUEmVEfGoyu0_S/view?usp=sharing)
## 5.2. Our Interpreter server & first entities
[[video]](https://drive.google.com/file/d/1lkOWiKjwy55BPQ99Tr9GAT7KhRkAIkJH/view?usp=sharing)
[[cc]](https://drive.google.com/file/d/1lv9nFCr6hOdFKMgZ27CrULR5B3-mnyF-/view?usp=sharing)


# Section 6: Data & Sentence-encoders
## 6.1. Presenting the Dataset
[[video]](https://drive.google.com/file/d/1nRQuNPpbi1OXyrsOobnaX27OOqYFn5AG/view?usp=sharing)
[[cc]](https://drive.google.com/file/d/1nP895amdq_CqaGQSGSpUFSMH9zycHil-/view?usp=sharing)
[[code]](https://drive.google.com/file/d/1ncdLdsDLuTcHXHwsxg78owuQjcTdQcvj/view?usp=sharing)
## 6.2. Sentence Encoder
[[video]](https://drive.google.com/file/d/1nGhHwwLtCepI-2bI_m__jZmvbuXhAxSa/view?usp=sharing)
[[cc]](https://drive.google.com/file/d/1n_4187_ZUm2-yFtqeZozcaC0JdRN_Ksi/view?usp=sharing)
[[code]](https://drive.google.com/file/d/1nkfr3OSw5GHpGW4H58umiH_oxmcJuzG5/view?usp=sharing)
## 6.3. Searching for entities
[[video]](https://drive.google.com/file/d/1nYXvaRlapqAOQXFqL1axsY7If4RONvJf/view?usp=sharing)
[[cc]](https://drive.google.com/file/d/1njL4jw2bPVWWlaoUSKfwM19ydtBLGEO1/view?usp=sharing)
[[code]](https://drive.google.com/file/d/1nlEVbdmwO3Pi_OxvRW9bfPOMPF72Ewr2/view?usp=sharing)
## 6.4. A note on pre-trained models
### A note on pre-trained models
As you have already seen, we are using mostly pre-trained models in our application.

Rasa uses Spacy's language model, which has been massively pre-trained, we also use the sentence-encoder model which again has been massively pre-trained by google. And by the end of the course we'll use more, mostly indirectly through API's.

The reason for this is quite simple. The field has advanced enough and the models are good enough so that they can be used in a general way. Plus, these models have been trained on very huge amounts of data using several of the top GPU's available in parallel. Something that not many of us can afford, so of course we're happy to use them.

That being said, depending on the context, you might end up having to fine-tune a model. For example if you have certain medical entities and terminologies, you'll have to enrich the language model and fine-tune it to be able to work with them. But don't be discouraged, that won't mean you too have to get entire GB's of data and multiple GPU's. Most models offer advice on how to fine tune them.

# Section 7: Constructing the bot actions
## 7.1. Menu or help
[[video]](https://drive.google.com/file/d/1o4YbDh97sgEVHtt78KsxiK4bLt9V-qBl/view?usp=sharing)
[[cc]](https://drive.google.com/file/d/1oAV2NSOf4fLpWlZvdwmUmaRaB77RcmFt/view?usp=sharing)
[[code]](https://drive.google.com/file/d/1oYVAuTBJVWutDLMGBTB6OwiBbxCEvKnM/view?usp=sharing)
## 7.2. Filter & help
[[video]](https://drive.google.com/file/d/1o8S47Eo8rf09Nt0G2R-6QaaXEEC4nIgg/view?usp=sharing)
[[cc]](https://drive.google.com/file/d/1oDnHkRfvTTRw2rOg3aXBRoWQS8Q4UiLi/view?usp=sharing)
[[code]](https://drive.google.com/file/d/1ok_iw7bqzvEZMLKo5p6VNkvoNFwwhMRm/view?usp=sharing)
## 7.3. Listing and selecting
[[video]](https://drive.google.com/file/d/1oDKB6G4NU43RbEnZZ1wgA5QOeDQWfB71/view?usp=sharing)
[[cc]](https://drive.google.com/file/d/1oIL3_qudw-i6GuLtPrhtNEmux1lQOR7V/view?usp=sharing)
[[code]](https://drive.google.com/file/d/1opXCPpLPlpAl5IFUPT9OT14uoEXsPUka/view?usp=sharing)
## 7.4. Confirm order
[[video]](https://drive.google.com/file/d/1oEAml2yQa1QGE7e_6MG_jV7bdHAphSeF/view?usp=sharing)
[[cc]](https://drive.google.com/file/d/1oSIZsiBMF2mhT24QYxNOSxmaWezmruCZ/view?usp=sharing)
[[code]](https://drive.google.com/file/d/1oqiydIW60GlT1zaMOn-dynsfLUjsRLiO/view?usp=sharing)
## 7.5. Finalizing
[[video]](https://drive.google.com/file/d/1oJ-85hU34CGp-0fw_FeJNk9eC5Ylb81v/view?usp=sharing)
[[cc]](https://drive.google.com/file/d/1okG1YQPb2QJa5qWAdB_jXM1JFHt3WJ-I/view?usp=sharing)
[[code]](https://drive.google.com/file/d/1ox1v2AalZuv5tpDKk5A7SPRrtOlAvdgl/view?usp=sharing)
## 7.6. A note on bot architecture
### A note on bot architecture
As I've said in the videos, the storyline we constructed for the bot is a pretty simple one, specially thought to show you how to deal with different obstacles.

Normally, at this point I would start to go over it and complicate it with various other possibilities and edge-cases. But here's the nice part, that process is simply reiterating, it's mostly doing the same thing we did here. Sure, from time to time you'll encounter a more interesting situation, but most times it will be pretty simple and straightforward.

That's why I think after this you'll be well equipped to build more complex interactions. Just remember to present the questions and construct your options so that the user has mostly clear choices, and you'll provide him with a great experience.

Think about it this way, most people know that they are talking with a bot. And sadly, because of many negative examples, they're not really expecting it to work too much. So if you're able to provide him with a good experience, even if not very "advanced", your bot will be the one that will stand out from the dozen.

Regarding Rasa, I do encourage you to experiment with the entire library and not just the NLU part. I explained why I used only the NLU part, but as I said in the video also, you could use it for most chatbots if they don't necessitate more complex storylines.

# Section 8: Data... always more data
## 8.1. Theory, reasons and caveats
[[video]](https://drive.google.com/file/d/1p-kuPfV59hGmckx8rP81bVTe8ipSh1LA/view?usp=sharing)
[[cc]](https://drive.google.com/file/d/1p5ZD28kJKqZCxWigNilyQbrL55IwyM14/view?usp=sharing)
## 8.2. Auto data generation - Translation to the rescue
[[video]](https://drive.google.com/file/d/1p0rGpWpoD3Bh5d29uODc6DfVgUF8hunK/view?usp=sharing)
[[cc]](https://drive.google.com/file/d/1pE4fycRS3RCU7LHAVzuVRuiL_rPC6GE2/view?usp=sharing)
[[code]](https://drive.google.com/file/d/1pSrAx4pMvl_eHOuDjnf_kfFRPoGpQuZi/view?usp=sharing)
## 8.3. Disambiguation
[[video]](https://drive.google.com/file/d/1p8xeyEWbLoYy9MthM0-KHBw1VTBxHkU7/view?usp=sharing)
[[cc]](https://drive.google.com/file/d/1pPba5FmX-oinOyVal325dnZgqglIi-45/view?usp=sharing)
[[code]](https://drive.google.com/file/d/1pb4wpZaNN4B1mUN2EOS9vCfuzZu0I1N7/view?usp=sharing)
## 8.4. Data gathering
[[video]](https://drive.google.com/file/d/1pFTziG--1az4fgBqWXesRiCpXdtWYn_I/view?usp=sharing)
[[cc]](https://drive.google.com/file/d/1pTc_wgebGYjm6wEFEdRXgr5L_XU9qZeJ/view?usp=sharing)
[[code]](https://drive.google.com/file/d/1prQWj36T-__l11lbKS4QRWSmOYLM-ihg/view?usp=sharing)

# Section 9: Completing the bot
## 9.1. Localization
[[video]](https://drive.google.com/file/d/1pys7EdmYt-tGeriGApBixVEdFLx5DqlB/view?usp=sharing)
[[cc]](https://drive.google.com/file/d/1q5YIb5ji67tShyuLfBunMNLubLnvafye/view?usp=sharing)
[[code]](https://drive.google.com/file/d/1qNnLgP1GiIRXJ64hdZPWAjAQ91VSZPn0/view?usp=sharing)
## 9.2. Speech
[[video]](https://drive.google.com/file/d/1q49LNxLS0idcmdwbYherPATvBYb7Xt2Y/view?usp=sharing)
[[cc]](https://drive.google.com/file/d/1qMgkdHMzl0Xs0MiL0ZINWGsIwjL-QBqC/view?usp=sharing)

## 9.3. Bonus improvements
[[video]](https://drive.google.com/file/d/1qBHbFxO-vi_tt6XjVA6r53erQA99XsPp/view?usp=sharing)
[[cc]](https://drive.google.com/file/d/1qV3laKGLoATw0aKqSyM6fjzcC-mC9mhH/view?usp=sharing)
[[code]](https://drive.google.com/file/d/1qVXiyUnh2l7ncRVFlpVdnqZpdjwmJOi4/view?usp=sharing)

# Section 10: Outro
## 10.1. Conclusions
[[video]](https://drive.google.com/file/d/1kJHjyD5BE9H8cImdcmouo9ez-ZzOUao5/view?usp=sharing)
[[cc]](https://drive.google.com/file/d/1knePMQ9X5vtKmDKz_PGxPsgIEcCRLaWP/view?usp=sharing)

# source
[pdan93](https://github.com/pdan93/chatbot_course)  
[udemy](https://www.udemy.com/course/nlp-chatbots/)
