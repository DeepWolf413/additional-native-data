// act_bankrobbery01.ysc @ L49759
bool func_1523(float fParam0, float fParam1)
{
  if (PED::IS_PED_ON_MOUNT(Global_35))
  {
    return ENTITY::GET_ENTITY_SPEED(Global_35) < fParam0;
  }
  return ENTITY::GET_ENTITY_SPEED(Global_35) < fParam1;
}