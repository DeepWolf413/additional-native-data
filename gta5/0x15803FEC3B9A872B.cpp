// fmmc_launcher.ysc @ L363887
void func_5821()
{
  if (func_5509())
  {
    HUD::_SET_WARNING_MESSAGE_WITH_ALERT("FACES_WARNH2", "QM_NO_1", 0, 6, "", false, -1, 0, func_5822(func_5326(0)), func_5822(func_5326(0)), true, 0);
  }
  else if (func_5687())
  {
    HUD::SET_WARNING_MESSAGE_WITH_HEADER_AND_SUBSTRING_FLAGS("FACES_WARNH2", "QM_NO_AWSP", 36, 0, false, -1, 0, 0, 0, true, 0);
  }
  else if ((func_5796() && !Global_262145.f_4683) && !func_5325())
  {
    HUD::_SET_WARNING_MESSAGE_WITH_ALERT("FACES_WARNH2", "QM_NO_2", 0, 6, "", false, -1, 0, func_5822(iLocal_17608), 0, true, 0);
  }
  else
  {
    HUD::_SET_WARNING_MESSAGE_WITH_ALERT("FACES_WARNH2", "QM_NO_0", 0, 6, "", false, -1, 0, func_5822(func_5326(0)), 0, true, 0);
  }
}