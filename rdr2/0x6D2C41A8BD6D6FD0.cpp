// abigail2_1.ysc @ L62746
void func_1668(int iParam0)
{
  int iVar0;

  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return;
  }
  iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
  func_171(&iVar0);
}