// native_son1.ysc @ L54691
bool func_1278(bool bParam0)
{
  int iVar0;

  if (iLocal_255 < 8 && !ENTITY::DOES_ENTITY_EXIST(Local_130[iLocal_255 /*2*/]))
  {
    iVar0 = iLocal_255;
    Local_130[iLocal_255 /*2*/] = func_1721(func_1768(iVar0), func_485(5, iVar0), func_486(5, iVar0), 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_130[iVar0 /*2*/], true);
    PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_130[iLocal_255 /*2*/], joaat("REL_GANG_DUTCHS_HORSES"));
    func_1733(Local_130[iVar0 /*2*/], 0);
    PED::SET_PED_CONFIG_FLAG(Local_130[iVar0 /*2*/], 136, true);
    PED::SET_PED_CONFIG_FLAG(Local_130[iVar0 /*2*/], 419, true);
    ENTITY::SET_ENTITY_PROOFS(Local_130[iVar0 /*2*/], 2, false);
    PED::_0xD05AD61F242C626B(Local_130[iVar0 /*2*/], 0f);
    PED::_0xD61FCF9FCFD515B7(Local_130[iVar0 /*2*/], 0.2f, 0.5f);
    PED::_0xEA8763E505AFD49A(Local_130[iVar0 /*2*/], 0.2f, 0.2f);
    POPULATION::_0xF74E134F40192884(Local_130[iVar0 /*2*/], 2);
    if (bParam0)
    {
      ENTITY::FREEZE_ENTITY_POSITION(Local_130[iLocal_255 /*2*/], true);
      PED::SET_PED_CAN_RAGDOLL(Local_130[iVar0 /*2*/], false);
    }
    iLocal_255++;
    return false;
  }
  iLocal_255 = 0;
  return true;
}