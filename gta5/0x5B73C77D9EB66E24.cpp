// finale_heist2a.ysc @ L129346
float func_963()
{
  float fVar0;
  
  fVar0 = GRAPHICS::_GET_ASPECT_RATIO(true);
  if (fVar0 > 3f)
  {
    fVar0 = 1.77f;
    PAD::_0x5B73C77D9EB66E24(true);
  }
  return (1f / fVar0);
}