url="选课界面的url"


cookie = {
"username": "...",
"password": "..."
}

while True:
    time.sleep(delay) 
   
    if into_url(cookie):
       
        if has_no_empty():
           
            continue
        else:
           
            if has_no_code():
                exejs.execute('document.getElementByID("xuanke").click()')
            else:
                
                down_load_code_image()
                
                tip_user()
                wait_for_input_code()
               
                code = input_code(image_path)
                upload(code)
               
                exejs.execute('document.getElementByID("xuanke").click()')
               

    else:
        
        set_user_agent()
       
