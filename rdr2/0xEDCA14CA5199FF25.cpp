// native_son3.ysc @ L75927
int func_1947(int iParam0)
{
  int iVar0;

  iVar0 = WEAPON::GET_WEAPONTYPE_GROUP(iParam0);
  switch (iVar0)
  {
    case joaat("GROUP_REVOLVER"):
    case joaat("GROUP_PISTOL"):
      return 2;
    case joaat("GROUP_SNIPER"):
    case joaat("GROUP_REPEATER"):
    case joaat("GROUP_SHOTGUN"):
    case joaat("GROUP_RIFLE"):
      return 9;
    case joaat("GROUP_BOW"):
      return 7;
    case joaat("GROUP_THROWN"):
      return 6;
    default:
      return 29;
  }
  return 29;
}