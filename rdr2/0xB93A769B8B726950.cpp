// saintdenis.ysc @ L4099
void func_109()
{
  int iVar0;
  int iVar1;

  iVar0 = 250;
  iVar1 = func_244(iVar0);
  if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
  {
    if (bLocal_692)
    {
      bLocal_692 = false;
    }
    return;
  }
  if (!ENTITY::IS_ENTITY_DEAD(iVar1))
  {
    if (((!bLocal_692 && AUDIO::_0xBE28DB99556FF8D9(iVar1) != 0) && !func_266(iVar0, 0)) && PED::_IS_PED_USING_SCENARIO_HASH(iVar1, joaat("PROP_HUMAN_PIANO")))
    {
      AUDIO::_0x8E901B65206C2D3E(iVar1);
      AUDIO::_0xB93A769B8B726950(iVar1, -1542215752);
      AUDIO::_0xC4CFCE4C656EF480(iVar1);
      bLocal_692 = true;
    }
    else if (bLocal_692 && !PED::_IS_PED_USING_SCENARIO_HASH(iVar1, joaat("PROP_HUMAN_PIANO")))
    {
      bLocal_692 = false;
    }
  }
}