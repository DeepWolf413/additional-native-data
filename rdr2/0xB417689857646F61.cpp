// act_camp_dominoes_light.ysc @ L2238
bool func_96(int iParam0)
{
  bool bVar0;
  int iVar1;

  bVar0 = func_94(iParam0);
  if (bVar0)
  {
    if (!func_144(iParam0, 1, 1))
    {
      return false;
    }
    iVar1 = func_30(iParam0);
    if (ENTITY::DOES_ENTITY_EXIST(iVar1) && INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar1) != 0)
    {
      return false;
    }
    switch (iParam0)
    {
      case 5:
      case 13:
      case 15:
      case 17:
      case 22:
        return true;
      default:
        break;
    }
  }
  return false;
}