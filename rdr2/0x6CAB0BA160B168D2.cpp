// hunting1.ysc @ L76969
void func_1994()
{
  if (!ENTITY::IS_ENTITY_DEAD(func_171()))
  {
    if (!func_1456(5, 0))
    {
      TASK::CLEAR_PED_TASKS(func_171(), true, false);
      func_2494(5, 0);
      PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_171(), true);
    }
    else
    {
      CAM::_0x6CAB0BA160B168D2();
    }
  }
}