// ambush_inb_forest.ysc @ L17988
int func_672(vector3 vParam0, bool bParam3)
{
  if (CAM::_0xA24C1D341C6E0D53(0, 0, 0) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
  {
    CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
    if (bParam3)
    {
      func_771(vParam0);
    }
    func_772(vParam0);
    return 1;
  }
  return 0;
}