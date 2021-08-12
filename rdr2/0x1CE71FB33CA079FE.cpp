// act_cajav_homerob1.ysc @ L9462
void func_231()
{
  float fVar0;

  if (func_66(16))
  {
    return;
  }
  if (iLocal_147 >= 6)
  {
    return;
  }
  fVar0 = func_223(Global_35, func_538(), 1);
  if (!func_66(8))
  {
    if (fVar0 > 300f)
    {
      STREAMING::END_SRL();
      func_228(8);
    }
  }
  else if (fVar0 < 200f)
  {
    func_227();
    func_257(8);
  }
}