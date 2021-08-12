// beat_animal_attack.ysc @ L18551
int func_581(int iParam0)
{
  var uVar0;
  int iVar3;

  if (INTERIOR::IS_VALID_INTERIOR(iParam0))
  {
    INTERIOR::_GET_INTERIOR_INFO(iParam0, &uVar0, &iVar3);
    switch (iVar3)
    {
      case joaat("L_14_CAVE_INT"):
      case joaat("GAP_MINE_INT"):
      case joaat("MIL_MINE_CAVE_INT"):
      case joaat("M05_BEARCAVE_MAIN"):
      case joaat("ELH_SEACAVES_INT"):
      case joaat("BEA_01_INT"):
      case joaat("AGU_FUS_CAVE_INT"):
      case 1633500362:
        return 1;
    }
  }
  return 0;
}