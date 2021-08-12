// gang2.ysc @ L55484
void func_1374(bool bParam0)
{
  if (bParam0)
  {
    ENTITY::SET_ENTITY_COLLISION(Global_35, false, false);
    ENTITY::SET_ENTITY_DYNAMIC(Global_35, false);
    PED::SET_PED_LEG_IK_MODE(Global_35, 0);
    PED::SET_PED_GRAVITY(Global_35, false);
    ENTITY::SET_ENTITY_COLLISION(iLocal_315[1], false, false);
    ENTITY::SET_ENTITY_DYNAMIC(iLocal_315[1], false);
    PED::SET_PED_LEG_IK_MODE(iLocal_315[1], 0);
    PED::SET_PED_GRAVITY(iLocal_315[1], false);
  }
  else
  {
    ENTITY::SET_ENTITY_COLLISION(Global_35, true, false);
    ENTITY::SET_ENTITY_DYNAMIC(Global_35, true);
    PED::SET_PED_LEG_IK_MODE(Global_35, 2);
    PED::SET_PED_GRAVITY(Global_35, true);
    ENTITY::SET_ENTITY_COLLISION(iLocal_315[1], true, false);
    ENTITY::SET_ENTITY_DYNAMIC(iLocal_315[1], true);
    PED::SET_PED_LEG_IK_MODE(iLocal_315[1], 1);
    PED::SET_PED_GRAVITY(iLocal_315[1], true);
  }
}