// rcm_chain_gang2.ysc @ L17547
bool func_601(int iParam0, var uParam1)
{
  if (PED::_0xC8D523BF5BBD3808(*iParam0, joaat("EVENT_SHOT_FIRED_WHIZZED_BY")))
  {
    PED::_0xCB8F4C9343EBE240(*iParam0, joaat("EVENT_SHOT_FIRED_WHIZZED_BY"), uParam1);
    return true;
  }
  else if (PED::_0xC8D523BF5BBD3808(*iParam0, joaat("EVENT_SHOT_FIRED")))
  {
    PED::_0xCB8F4C9343EBE240(*iParam0, joaat("EVENT_SHOT_FIRED"), uParam1);
    if (func_276(*iParam0, *uParam1, 1) < 20f)
    {
      return true;
    }
  }
  else if (PED::_0xC8D523BF5BBD3808(*iParam0, joaat("EVENT_SHOT_FIRED_BULLET_IMPACT")))
  {
    PED::_0xCB8F4C9343EBE240(*iParam0, joaat("EVENT_SHOT_FIRED_BULLET_IMPACT"), uParam1);
    if (func_276(*iParam0, *uParam1, 1) < 20f)
    {
      return true;
    }
  }
  if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*iParam0, false, false), 20f, true))
  {
    *uParam1 = { Global_36 };
    return true;
  }
  return false;
}