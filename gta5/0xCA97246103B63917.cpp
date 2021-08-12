// appjipmp.ysc @ L9267
void func_253(bool bParam0)
{
  if (!NETWORK::NETWORK_IS_IN_SESSION())
  {
    func_255(1);
    if (bParam0)
    {
      Global_2453903.f_1.f_2802 = 0;
    }
    func_254();
    func_312();
  }
}