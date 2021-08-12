// short_update.ysc @ L32430
void func_985(var uParam0, int iParam1, char* sParam2, char* sParam3)
{
  int iVar0;
  int iVar1;

  iVar0 = -1;
  iVar1 = -1;
  if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2) || !MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
  {
    iVar0 = MISC::GET_HASH_KEY(sParam2);
    iVar1 = MISC::GET_HASH_KEY(sParam3);
  }
  if (!CAM::_0x927B810E43E99932(uParam0))
  {
    if ((CAM::_0xDD0B7C5AE58F721D(uParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1)) && (iVar0 != -1 || iVar1 != -1))
    {
      CAM::_0xB8B207C34285E978(uParam0);
      uParam0->f_16 = iParam1;
      uParam0->f_17 = iVar0;
      uParam0->f_18 = iVar1;
      CAM::_0x29E6655DF3590B0D(uParam0);
    }
  }
  else if (((uParam0->f_16 != iParam1 && ENTITY::DOES_ENTITY_EXIST(iParam1)) || uParam0->f_17 != iVar0) || uParam0->f_18 != iVar1)
  {
    uParam0->f_16 = iParam1;
    uParam0->f_17 = iVar0;
    uParam0->f_18 = iVar1;
    CAM::_0x29E6655DF3590B0D(uParam0);
  }
}