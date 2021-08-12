// barry2.ysc @ L38414
void func_306(var uParam0)
{
  if (*uParam0 == 0)
  {
    return;
  }
  if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
  {
    return;
  }
  if (ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
  {
  }
  VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(uParam0->f_3, false);
  ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uParam0->f_3, false, 0f);
  func_308(&(uParam0->f_3));
  func_307(uParam0);
}