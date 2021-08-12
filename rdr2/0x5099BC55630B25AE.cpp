// gang3.ysc @ L52921
void func_1299(bool bParam0)
{
  int iVar0;

  if (!OBJECT::DOES_PICKUP_EXIST(iLocal_984))
  {
    return;
  }
  iVar0 = OBJECT::GET_PICKUP_OBJECT(iLocal_984);
  if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    return;
  }
  if (bParam0)
  {
    if (!MAP::DOES_BLIP_EXIST(iLocal_985))
    {
      iLocal_985 = MAP::_BLIP_ADD_FOR_ENTITY(1664425300, iVar0);
      MAP::_BLIP_SET_MODIFIER(iLocal_985, -401963276);
    }
  }
  else
  {
    func_1823(&iLocal_985);
  }
}