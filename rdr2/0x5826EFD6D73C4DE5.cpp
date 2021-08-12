// rcm_pearson1.ysc @ L6182
void func_159(var uParam0)
{
  int iVar0;

  func_524(uParam0);
  func_525(uParam0);
  iVar0 = 0;
  iVar0 = 0;
  while (iVar0 < 4)
  {
    func_467(&(Local_459[iVar0 /*45*/].f_1));
    func_526(&(Local_459[iVar0 /*45*/]));
    if (!ENTITY::DOES_ENTITY_EXIST(Local_459[iVar0 /*45*/]))
    {
    }
    else
    {
      PED::_0x3088634CF8C819CF(Local_459[iVar0 /*45*/]);
      ENTITY::_0x5826EFD6D73C4DE5(Local_459[iVar0 /*45*/]);
      func_169(&(Local_459[iVar0 /*45*/]), 1, 0, 1);
    }
    iVar0++;
  }
  func_527(&iLocal_97, 1, 1);
  func_527(&iLocal_98, 1, 1);
  func_528(1);
}