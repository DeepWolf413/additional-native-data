// bjack_launch_sp.ysc @ L4745
void func_153(var uParam0, int iParam1)
{
  ENTITY::SET_ENTITY_COLLISION(uParam0->f_240[iParam1 /*24*/].f_4, true, false);
  if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_240[iParam1 /*24*/].f_4))
  {
    func_228(uParam0->f_240[iParam1 /*24*/].f_4, 1, 1);
  }
  ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_240[iParam1 /*24*/].f_4, false);
  ENTITY::SET_ENTITY_DYNAMIC(uParam0->f_240[iParam1 /*24*/].f_4, true);
  PHYSICS::ACTIVATE_PHYSICS(uParam0->f_240[iParam1 /*24*/].f_4);
  ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_240[iParam1 /*24*/].f_4, true);
}