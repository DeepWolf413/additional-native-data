// flow_controller.ysc @ L3290
int func_152(int iParam0)
{
  Global_40.f_11095.f_67 = iParam0;
  if (Global_40.f_11095.f_67 >= 9)
  {
    Global_40.f_11095.f_44 = 0.2f;
    func_314();
  }
  if ((Global_40.f_11095.f_67 == 9 && !ENTITY::IS_ENTITY_DEAD(Global_35)) && !func_315())
  {
    AUDIO::_0xD47D47EFBF103FB8(Global_35, 3);
  }
  return -2;
}