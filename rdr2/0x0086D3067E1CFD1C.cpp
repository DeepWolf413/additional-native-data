// aberdeenpigfarm.ysc @ L1738
void func_75()
{
  if (!func_149(Global_1327479))
  {
    return;
  }
  if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1310750[Global_1327479 /*111*/].f_40)))
  {
    if (SCRIPTS::HAS_SCRIPT_LOADED(&(Global_1310750[Global_1327479 /*111*/].f_40)))
    {
      SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1310750[Global_1327479 /*111*/].f_40));
    }
  }
  func_150(0);
  Global_1327479 = -1;
  Global_1310750.f_16075 = 0;
  Global_1310750.f_16076 = 0;
  Global_1310750.f_16103 = { 0f, 0f, 0f };
}