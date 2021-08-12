// odriscolls5.ysc @ L55024
void func_1330(bool bParam0)
{
  if (!ENTITY::IS_ENTITY_DEAD(iLocal_666))
  {
    if (bParam0)
    {
      TASK::CLEAR_PED_TASKS(iLocal_666, true, false);
      ENTITY::_SET_ENTITY_HEALTH(iLocal_666, ENTITY::GET_ENTITY_MAX_HEALTH(iLocal_666, false), 0);
      PED::_SET_PED_HEADSHOT_DAMAGE_MULTIPLIER(iLocal_666, 0.2f);
      PED::_0xC2266AA617668AD3(iLocal_666, 0f);
    }
    else
    {
      PED::_0xC2266AA617668AD3(iLocal_666, 0.3f);
    }
  }
  if (!ENTITY::IS_ENTITY_DEAD(iLocal_667))
  {
    if (bParam0)
    {
      TASK::CLEAR_PED_TASKS(iLocal_667, true, false);
      ENTITY::_SET_ENTITY_HEALTH(iLocal_667, ENTITY::GET_ENTITY_MAX_HEALTH(iLocal_667, false), 0);
      PED::_SET_PED_HEADSHOT_DAMAGE_MULTIPLIER(iLocal_667, 0.2f);
      PED::_0xC2266AA617668AD3(iLocal_667, 0f);
    }
    else
    {
      PED::_0xC2266AA617668AD3(iLocal_667, 0.3f);
    }
  }
}