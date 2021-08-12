// abigail2_1.ysc @ L16782
void func_132(char[4] cParam0)
{
  if (UILOG::_UILOG_IS_ENTRY_REGISTERED(2, func_85(cParam0)))
  {
    UILOG::_UILOG_REMOVE_ENTRY(2, func_85(cParam0));
  }
  if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(1, func_85(cParam0)))
  {
    func_388(cParam0->f_607);
  }
}