// rcm_oh_brother1.ysc @ L8634
bool func_300(int iParam0, int iParam1)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53[iParam1]))
  {
    iLocal_53[iParam1] = OBJECT::CREATE_OBJECT(iParam0, vLocal_60[iParam1 /*3*/], true, true, false, false, true);
  }
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_53[iParam1]))
  {
    OBJECT::_0xE157A8A336C7F04A(iLocal_53[iParam1], 1);
    return true;
  }
  return false;
}