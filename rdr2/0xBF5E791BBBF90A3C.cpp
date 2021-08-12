// mudtown3.ysc @ L95493
bool func_2715()
{
  int iVar0;

  iVar0 = PED::_0xBF5E791BBBF90A3C(Global_35, "HumanInteractionType");
  if (iVar0 == 0)
  {
    return false;
  }
  if ((iVar0 == joaat("INTERACTION_POSITIVELONG") || iVar0 == joaat("INTERACTION_POSITIVESHORT")) || iVar0 == joaat("INTERACTION_POSITIVESHORTAGITATED"))
  {
    return true;
  }
  return false;
}