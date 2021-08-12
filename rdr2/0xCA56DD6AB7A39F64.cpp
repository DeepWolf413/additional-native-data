// shop_bait.ysc @ L10884
bool func_322(var uParam0)
{
  int iVar0;

  iVar0 = 1729714979;
  if (iVar0 == 0)
  {
    return true;
  }
  if (!DATAFILE::_0x7907969497EA92F5(uParam0->f_1267))
  {
    uParam0->f_1267 = DATAFILE::_0xCA56DD6AB7A39F64(iVar0);
    func_325(&(uParam0->f_1268), 1);
  }
  return true;
}