// guama2.ysc @ L51595
void func_1252()
{
  PED::_0x0E17378642156790(Global_35, "BodyPartChained");
  PED::SET_ENABLE_BOUND_ANKLES(Global_35, false);
  if (PHYSICS::DOES_ROPE_EXIST(iLocal_451))
  {
    PHYSICS::DELETE_ROPE(&iLocal_451);
  }
  if (PHYSICS::DOES_ROPE_EXIST(uLocal_443[0]) && PHYSICS::_0x9B4F7E3E4F9C77B3(uLocal_443[0], Global_35))
  {
    PHYSICS::DETACH_ROPE_FROM_ENTITY(uLocal_443[0], Global_35);
  }
}