// reverend1.ysc @ L69993
int func_1828()
{
  vector3 vVar0;

  vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_63[18], false, false) };
  if (!func_26(&uLocal_1835))
  {
    if (MISC::_0xDC416CA762BC4F43(vVar0, 15f, 1, 1) > 0)
    {
      func_213(&uLocal_1835);
    }
  }
  else if (func_1498(&uLocal_1835) > 1f)
  {
    return 2;
  }
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_63[18]) && PED::IS_PED_DEAD_OR_DYING(iLocal_63[18], true))
  {
    return 1;
  }
  if (func_449(42))
  {
    return 3;
  }
  return 0;
}