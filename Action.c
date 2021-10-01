Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=94", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("blazedemo.com", 
		"URL=http://blazedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://blazedemo.com/favicon.ico", "Referer=https://blazedemo.com/", ENDITEM, 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"94\", \"Google Chrome\";v=\"94\", \";Not A Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	lr_think_time(8);

	web_url("search", 
		"URL=https://www.google.com/search?q=mcdonalds&rlz=1C1CHZN_enAU944AU944&oq=mcdo&aqs=chrome.1.69i57j0i271l3.2698j0j1&sourceid=chrome&ie=UTF-8", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://fonts.gstatic.com/s/googlesans/v14/4UaGrENHsxJlGDuGo1OIlL3Owp4.woff2", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://www.gstatic.com/ui/v1/activityindicator/loading_24.gif", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://www.gstatic.com/og/_/js/k=og.qtm.en_US.2NbhTa4sfT0.O/rt=j/m=qabr,q_dnp,qcwid,qapid/exm=qaaw,qadd,qaid,qein,qhaw,qhbr,qhch,qhga,qhid,qhin,qhpr/d=1/ed=1/rs=AA2YrTvl8W6lTCs_Kdx1wiGPdcLo8JIa4Q", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://apis.google.com/_/scs/abc-static/_/js/k=gapi.gapi.en.M5RD94rmgZI.O/m=gapi_iframes,googleapis_client/rt=j/sv=1/d=1/ed=1/rs=AHpOoo8z3ZIGbS4Q1hdxlO0-i7gQCAheug/cb=gapi.loaded_0", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcR1R9qVKAq5rWwj6lLbye1ByAq8L1PUXDgOyvKWmhE&s=0", "Referer=https://www.google.com/", ENDITEM, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChNDaHJvbWUvOTQuMC40NjA2LjYxEhAJS9QJ-Imio-ISBQ1KhZ5S?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_add_cookie("NID=511=SmMUXdnOKulaTCbGGiXwgKSvFojOlHobFyZSe9Y-yHjlDGXgP9aK0cL9DcBnrcW1M0QzyHjXQFymOXhJFYpvt9qXa6pjpuTZOOxiOPqVwItvL83JZWGyzucWW-W03INpCXbb_HwHwF5AY6fSFvkxzaIpWy5o0-Wpz1Hcxwo4e0E; DOMAIN=adservice.google.com");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Sec-Fetch-Site", 
		"same-site");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("ui", 
		"URL=https://adservice.google.com/adsid/google/ui", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://blazedemo.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("reserve.php", 
		"Action=https://blazedemo.com/reserve.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=fromPort", "Value=Philadelphia", ENDITEM, 
		"Name=toPort", "Value=Berlin", ENDITEM, 
		LAST);

	web_submit_form("purchase.php", 
		"Ordinal=2", 
		"Snapshot=t18.inf", 
		ITEMDATA, 
		LAST);

	lr_think_time(9);

	web_submit_form("confirmation.php", 
		"Snapshot=t19.inf", 
		ITEMDATA, 
		"Name=inputName", "Value=priya", ENDITEM, 
		"Name=address", "Value=1 main street", ENDITEM, 
		"Name=city", "Value=sydney", ENDITEM, 
		"Name=state", "Value=nsw", ENDITEM, 
		"Name=zipCode", "Value=2850", ENDITEM, 
		"Name=cardType", "Value=Visa", ENDITEM, 
		"Name=creditCardNumber", "Value=895554", ENDITEM, 
		"Name=creditCardMonth", "Value=11", ENDITEM, 
		"Name=creditCardYear", "Value=2017", ENDITEM, 
		"Name=nameOnCard", "Value=priya", ENDITEM, 
		"Name=rememberMe", "Value=<OFF>", ENDITEM, 
		LAST);

	return 0;
}