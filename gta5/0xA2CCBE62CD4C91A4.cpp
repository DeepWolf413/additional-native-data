// appcamera.ysc @ L7150
void func_58()
{
  if (iLocal_61 == 1)
  {
    if (MISC::ARE_STRINGS_EQUAL(sLocal_19[Global_4271203], "phone_cam12DUMMY"))
    {
      MOBILE::_0xA2CCBE62CD4C91A4(0);
      MOBILE::_SET_MOBILE_PHONE_UNK(false);
    }
    else
    {
      MOBILE::_0xA2CCBE62CD4C91A4(1);
      MOBILE::_SET_MOBILE_PHONE_UNK(true);
    }
  }
}