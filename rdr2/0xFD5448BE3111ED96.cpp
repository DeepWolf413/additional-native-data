// act_bankrobbery01.ysc @ L40141
void func_1210(int iParam0, int iParam1)
{
  if (!PHYSICS::DOES_ROPE_EXIST(iParam0))
  {
  }
  else if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
  {
  }
  else if (PHYSICS::_0x9B4F7E3E4F9C77B3(iParam0, iParam1))
  {
    PHYSICS::DETACH_ROPE_FROM_ENTITY(iParam0, iParam1);
  }
}