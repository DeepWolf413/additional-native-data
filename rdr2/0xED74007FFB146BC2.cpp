// abigail2_1.ysc @ L26990
void func_512(int iParam0)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return;
  }
  if (!ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    if (PED::IS_PED_IN_GROUP(iParam0))
    {
      PED::REMOVE_PED_FROM_GROUP(iParam0);
    }
    PED::SET_PED_CAN_RAGDOLL(iParam0, true);
    PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, true);
  }
}