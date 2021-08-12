// fm_content_movie_props.ysc @ L26123
void func_675(int iParam0)
{
  int iVar0;
  
  if (func_244())
  {
    func_676(1775876058, iParam0, &iVar0, 0, 1, 0);
    Global_4265506[iVar0 /*85*/] = func_484();
  }
  else
  {
    unk_0xC0DE18944A7A9044(iParam0, func_484());
  }
  STATS::_PLAYSTATS_COLLECTIBLE(7, func_484(), Global_1710139.f_3, 10, func_567(), func_566(), 0, 7, func_525(), -1);
}