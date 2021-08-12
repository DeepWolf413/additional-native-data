// act_bankrobbery01.ysc @ L23786
void func_642(int iParam0, bool bParam1, bool bParam2)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return;
  }
  else if (ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    return;
  }
  if (bParam1)
  {
    if (!PED::_GET_PED_CROUCH_MOVEMENT(iParam0))
    {
      PED::_SET_PED_CROUCH_MOVEMENT(iParam0, true, 0, bParam2);
    }
  }
  else if (PED::_GET_PED_CROUCH_MOVEMENT(iParam0))
  {
    PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, bParam2);
  }
}