// rcm_monroe11.ysc @ L22549
void func_775(var uParam0)
{
  if (func_211(uParam0->f_190, 524288))
  {
    PED::_0x87C2724A56F66020(uParam0->f_111);
    PED::REMOVE_PED_FROM_GROUP(uParam0->f_111);
    if (PED::DOES_GROUP_EXIST(uParam0->f_110))
    {
      PED::REMOVE_GROUP(uParam0->f_110);
    }
    func_364(&(uParam0->f_190), 524288);
  }
}