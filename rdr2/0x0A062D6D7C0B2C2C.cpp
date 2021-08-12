// aberdeenpigfarm.ysc @ L2542
void func_95(int iParam0)
{
  func_168(iParam0, 4);
  func_170(Global_1392240.f_1[iParam0 /*18*/].f_4, 58, Global_1392240.f_1[iParam0 /*18*/], func_169(iParam0));
  if (MAP::DOES_BLIP_EXIST(Global_1392240.f_1[iParam0 /*18*/].f_5))
  {
    MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1392240.f_1[iParam0 /*18*/].f_5, func_169(iParam0));
  }
}