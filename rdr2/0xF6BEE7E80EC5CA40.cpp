// grizzlies_abandon.ysc @ L129
void func_3()
{
  Global_1897952.f_40 = 0;
  if (iLocal_19 != -1)
  {
    func_12(iLocal_19, 128);
  }
  func_4(1);
  MISC::SET_WIND_SPEED(-1f);
  MISC::SET_WIND_DIRECTION(-1f);
  MISC::_SET_SNOW_LEVEL(-1f);
  SCRIPTS::TERMINATE_THIS_THREAD();
}