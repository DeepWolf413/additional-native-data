// coachrobberies_intro.ysc @ L3206
void func_101()
{
  if (iLocal_62 != 0)
  {
    return;
  }
  if (bLocal_21)
  {
    return;
  }
  if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Local_73, true, false), Global_36) >= 2f && !PED::IS_PED_FACING_PED(Global_35, Local_73, 70f))
  {
    if (!bLocal_14)
    {
      func_66(&(Local_73.f_29), Local_73.f_140, 0, -1, 0, 0);
      bLocal_14 = true;
    }
    PED::_0x6D07B371E9439019(Local_73);
    PED::_0xD65FDC686A031C83(Local_73, joaat("CRHEC_LINE02"), 3f);
    bLocal_21 = true;
  }
}