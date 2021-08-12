// abigail2_1.ysc @ L83116
void func_2482(int iParam0, int iParam1)
{
  if (!ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    if (func_2123(iParam0, iParam1))
    {
      if (func_2124(iParam0, iParam1))
      {
        if (func_2125(iParam0, iParam1))
        {
          PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
          func_1414(iParam0);
        }
      }
      else
      {
        PED::_SET_PED_BODY_COMPONENT(iParam0, iParam1);
        PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
      }
      PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, true, true);
      PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
      PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
      PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
      PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
      PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 7);
      PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 8);
      PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 9);
    }
  }
}