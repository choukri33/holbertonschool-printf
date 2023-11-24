<p align="center">
  <img width="460" height="300" src="https://ecossistema.pe/wp-content/uploads/listing-uploads/logo/2023/01/Logo-PrintF.jpg">
</p>
<p align="center">
Hello👋🏻
</p>



## Task and Team

This project was released by Choukri and Houcine in Holbertonschool's Bordeaux.
For this project called "Printf" we had one week to complete it. The tasks were divided equally between myself and Choukri.

## Distribution of tasks

Choukri was in charge of task 0 containing: %c, %s, %, as well as the man page.
Myself in charge of task 1 containing: %d, %i, as well as writing this README and the flowchart.


This project consist of rebuilding the standard printf function in C. Our project required a function capable of printing with the %d, %c, %s, %i specifiers to standard output. _printf returns the number of characters printed. 
We were not asked to handle flag characters, field width, precision, or length.


## Prototype

int _printf(const char *format, ...);
## Format specifiers
| specifier |        description       |                  exemple                       |
|----------:|--------------------------|------------------------------------------------|
|    %c     | prints 1 character       | _printf("%c",'p');           --> "p"           |
|    %s     | prints a string          | _printf("%s", "let's code"); --> "let's code"  |
|    %i     | prints an integer        | _printf("%i", 33);           --> "33"          |
|    %d     | prints a decimal number  | _printf("%d", -33);          --> "-33"         |


## Flowchart
[<mxfile host="app.diagrams.net" modified="2023-11-24T13:06:18.934Z" agent="Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_7) AppleWebKit/605.1.15 (KHTML, like Gecko) Version/16.4 Safari/605.1.15" etag="FsuyOfHaNc-kOMcBJdmB" version="22.1.3" type="device">
  <diagram name="Page-1" id="h4J55cHLtA8x4xokmv7-">
    <mxGraphModel dx="1522" dy="1253" grid="0" gridSize="10" guides="1" tooltips="1" connect="1" arrows="1" fold="1" page="0" pageScale="1" pageWidth="827" pageHeight="1169" math="0" shadow="0">
      <root>
        <mxCell id="0" />
        <mxCell id="1" parent="0" />
        <mxCell id="IzJrm2bveVys1x2dKz1m-2" value="Start" style="ellipse;whiteSpace=wrap;html=1;fontSize=16;fillColor=#fff2cc;strokeColor=#000000;" vertex="1" parent="1">
          <mxGeometry x="128" y="-278" width="130" height="82" as="geometry" />
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-3" value="" style="endArrow=classic;html=1;rounded=0;fontSize=12;startSize=8;endSize=8;curved=1;" edge="1" parent="1">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="192.5" y="-196" as="sourcePoint" />
            <mxPoint x="193" y="-122" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-11" style="edgeStyle=none;curved=1;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;fontSize=12;startSize=8;endSize=8;" edge="1" parent="1" source="IzJrm2bveVys1x2dKz1m-5">
          <mxGeometry relative="1" as="geometry">
            <mxPoint x="30" y="83" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-22" style="edgeStyle=none;curved=1;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;exitX=0.5;exitY=1;exitDx=0;exitDy=0;fontSize=12;startSize=8;endSize=8;" edge="1" parent="1" source="IzJrm2bveVys1x2dKz1m-5">
          <mxGeometry relative="1" as="geometry">
            <mxPoint x="193" y="185" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-5" value="is string&lt;br&gt;NULL" style="rhombus;whiteSpace=wrap;html=1;fontSize=16;fillColor=#f8cecc;strokeColor=#000000;" vertex="1" parent="1">
          <mxGeometry x="149" y="37" width="88" height="92" as="geometry" />
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-7" value="" style="endArrow=classic;html=1;rounded=0;fontSize=12;startSize=8;endSize=8;curved=1;exitX=0.5;exitY=1;exitDx=0;exitDy=0;" edge="1" parent="1" source="IzJrm2bveVys1x2dKz1m-12">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="198" y="-51" as="sourcePoint" />
            <mxPoint x="193" y="38" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-12" value="input string" style="rounded=0;whiteSpace=wrap;html=1;fontSize=16;fillColor=#f5f5f5;strokeColor=#FF9933;fontColor=#333333;" vertex="1" parent="1">
          <mxGeometry x="125" y="-121" width="136" height="66" as="geometry" />
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-19" style="edgeStyle=none;curved=1;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;fontSize=12;startSize=8;endSize=8;" edge="1" parent="1" source="IzJrm2bveVys1x2dKz1m-13">
          <mxGeometry relative="1" as="geometry">
            <mxPoint x="-24" y="199" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-13" value="Return -1" style="rounded=0;whiteSpace=wrap;html=1;fontSize=16;fillColor=#f5f5f5;fontColor=#333333;strokeColor=#FF9933;" vertex="1" parent="1">
          <mxGeometry x="-77" y="51" width="106" height="65" as="geometry" />
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-14" value="Yes" style="text;html=1;align=center;verticalAlign=middle;resizable=0;points=[];autosize=1;strokeColor=none;fillColor=none;fontSize=16;" vertex="1" parent="1">
          <mxGeometry x="76" y="51" width="44" height="31" as="geometry" />
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-17" value="End" style="ellipse;whiteSpace=wrap;html=1;fontSize=16;fillColor=#fff2cc;strokeColor=#000000;" vertex="1" parent="1">
          <mxGeometry x="-81" y="200" width="110" height="70" as="geometry" />
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-24" value="" style="edgeStyle=none;curved=1;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;fontSize=12;startSize=8;endSize=8;" edge="1" parent="1" source="IzJrm2bveVys1x2dKz1m-21" target="IzJrm2bveVys1x2dKz1m-23">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-21" value="Look at &lt;br&gt;the string" style="rounded=0;whiteSpace=wrap;html=1;fontSize=16;fillColor=#f5f5f5;fontColor=#333333;strokeColor=#FF9933;" vertex="1" parent="1">
          <mxGeometry x="133" y="187" width="127" height="66" as="geometry" />
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-29" style="edgeStyle=none;curved=1;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;entryX=1;entryY=0.5;entryDx=0;entryDy=0;fontSize=12;startSize=8;endSize=8;" edge="1" parent="1" source="IzJrm2bveVys1x2dKz1m-23" target="IzJrm2bveVys1x2dKz1m-25">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-44" style="edgeStyle=none;curved=1;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;entryX=0.5;entryY=0;entryDx=0;entryDy=0;fontSize=12;startSize=8;endSize=8;" edge="1" parent="1" source="IzJrm2bveVys1x2dKz1m-23" target="IzJrm2bveVys1x2dKz1m-42">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-23" value="its&lt;br&gt;&#39;\0&#39;" style="rhombus;whiteSpace=wrap;html=1;fontSize=16;fillColor=#f8cecc;strokeColor=#000000;" vertex="1" parent="1">
          <mxGeometry x="152.75" y="322" width="87.5" height="92" as="geometry" />
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-25" value="Return the number of strings" style="rounded=0;whiteSpace=wrap;html=1;fontSize=16;fillColor=#f5f5f5;fontColor=#333333;strokeColor=#FF9933;" vertex="1" parent="1">
          <mxGeometry x="-216" y="335" width="128" height="66" as="geometry" />
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-39" value="" style="endArrow=none;html=1;rounded=0;fontSize=12;startSize=8;endSize=8;curved=1;" edge="1" parent="1">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="-151" y="335" as="sourcePoint" />
            <mxPoint x="-151" y="235" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-40" value="" style="endArrow=classic;html=1;rounded=0;fontSize=12;startSize=8;endSize=8;curved=1;" edge="1" parent="1">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="-150" y="234.58" as="sourcePoint" />
            <mxPoint x="-82" y="235" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-41" value="Yes" style="text;html=1;align=center;verticalAlign=middle;resizable=0;points=[];autosize=1;strokeColor=none;fillColor=none;fontSize=16;" vertex="1" parent="1">
          <mxGeometry x="18" y="335" width="44" height="31" as="geometry" />
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-47" style="edgeStyle=none;curved=1;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;entryX=0.5;entryY=0;entryDx=0;entryDy=0;fontSize=12;startSize=8;endSize=8;" edge="1" parent="1" source="IzJrm2bveVys1x2dKz1m-42" target="IzJrm2bveVys1x2dKz1m-46">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-42" value="its&lt;br&gt;&#39;%&#39;" style="rhombus;whiteSpace=wrap;html=1;fontSize=16;fillColor=#f8cecc;strokeColor=#000000;" vertex="1" parent="1">
          <mxGeometry x="152.75" y="488" width="90.25" height="90" as="geometry" />
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-45" value="No" style="text;html=1;align=center;verticalAlign=middle;resizable=0;points=[];autosize=1;strokeColor=none;fillColor=none;fontSize=16;" vertex="1" parent="1">
          <mxGeometry x="205" y="433" width="38" height="31" as="geometry" />
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-51" style="edgeStyle=none;curved=1;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;entryX=0;entryY=0.5;entryDx=0;entryDy=0;fontSize=12;startSize=8;endSize=8;" edge="1" parent="1" source="IzJrm2bveVys1x2dKz1m-46" target="IzJrm2bveVys1x2dKz1m-50">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-46" value="Check next&lt;br&gt;character" style="rounded=0;whiteSpace=wrap;html=1;fontSize=16;fillColor=#f5f5f5;fontColor=#333333;strokeColor=#FF9933;" vertex="1" parent="1">
          <mxGeometry x="130.63" y="653" width="134.5" height="70" as="geometry" />
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-48" value="Yes" style="text;html=1;align=center;verticalAlign=middle;resizable=0;points=[];autosize=1;strokeColor=none;fillColor=none;fontSize=16;" vertex="1" parent="1">
          <mxGeometry x="202" y="596" width="44" height="31" as="geometry" />
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-49" value="No" style="text;html=1;align=center;verticalAlign=middle;resizable=0;points=[];autosize=1;strokeColor=none;fillColor=none;fontSize=16;" vertex="1" parent="1">
          <mxGeometry x="205" y="134" width="38" height="31" as="geometry" />
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-55" style="edgeStyle=none;curved=1;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;entryX=0.5;entryY=0;entryDx=0;entryDy=0;fontSize=12;startSize=8;endSize=8;" edge="1" parent="1" source="IzJrm2bveVys1x2dKz1m-50" target="IzJrm2bveVys1x2dKz1m-54">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-56" style="edgeStyle=none;curved=1;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;entryX=0.5;entryY=1;entryDx=0;entryDy=0;fontSize=12;startSize=8;endSize=8;" edge="1" parent="1" source="IzJrm2bveVys1x2dKz1m-50" target="IzJrm2bveVys1x2dKz1m-52">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-50" value="is a format spécifier" style="rhombus;whiteSpace=wrap;html=1;fontSize=16;fillColor=#f8cecc;strokeColor=#000000;" vertex="1" parent="1">
          <mxGeometry x="442" y="636.5" width="103" height="103" as="geometry" />
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-57" style="edgeStyle=none;curved=1;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;entryX=0;entryY=0.5;entryDx=0;entryDy=0;fontSize=12;startSize=8;endSize=8;" edge="1" parent="1" source="IzJrm2bveVys1x2dKz1m-52" target="IzJrm2bveVys1x2dKz1m-53">
          <mxGeometry relative="1" as="geometry" />
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-52" value="Print character" style="rounded=0;whiteSpace=wrap;html=1;fontSize=16;fillColor=#f5f5f5;fontColor=#333333;strokeColor=#FF9933;" vertex="1" parent="1">
          <mxGeometry x="433.5" y="503" width="120" height="60" as="geometry" />
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-53" value="Increment count" style="rounded=0;whiteSpace=wrap;html=1;fontSize=16;fillColor=#f5f5f5;fontColor=#333333;strokeColor=#FF9933;" vertex="1" parent="1">
          <mxGeometry x="634" y="503" width="120" height="60" as="geometry" />
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-54" value="Print argument" style="rounded=0;whiteSpace=wrap;html=1;fontSize=16;fillColor=#f5f5f5;fontColor=#333333;strokeColor=#FF9933;" vertex="1" parent="1">
          <mxGeometry x="430.25" y="868" width="126.5" height="68" as="geometry" />
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-58" value="" style="endArrow=none;html=1;rounded=0;fontSize=12;startSize=8;endSize=8;curved=1;" edge="1" parent="1">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="556.75" y="903.5" as="sourcePoint" />
            <mxPoint x="896" y="904" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-59" value="" style="endArrow=none;html=1;rounded=0;fontSize=12;startSize=8;endSize=8;curved=1;" edge="1" parent="1">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="897" y="904" as="sourcePoint" />
            <mxPoint x="897" y="219" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-60" value="" style="endArrow=classic;html=1;rounded=0;fontSize=12;startSize=8;endSize=8;curved=1;entryX=1;entryY=0.5;entryDx=0;entryDy=0;" edge="1" parent="1">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="896" y="219" as="sourcePoint" />
            <mxPoint x="258" y="219" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-63" value="" style="endArrow=none;html=1;rounded=0;fontSize=12;startSize=8;endSize=8;curved=1;strokeColor=#000000;" edge="1" parent="1">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="491" y="500" as="sourcePoint" />
            <mxPoint x="491" y="236" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-65" value="" style="endArrow=classic;html=1;rounded=0;fontSize=12;startSize=8;endSize=8;curved=1;" edge="1" parent="1">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="491" y="237" as="sourcePoint" />
            <mxPoint x="262" y="237" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-66" value="Yes" style="text;html=1;align=center;verticalAlign=middle;resizable=0;points=[];autosize=1;strokeColor=none;fillColor=none;fontSize=16;" vertex="1" parent="1">
          <mxGeometry x="505" y="776" width="44" height="31" as="geometry" />
        </mxCell>
        <mxCell id="IzJrm2bveVys1x2dKz1m-67" value="No" style="text;html=1;align=center;verticalAlign=middle;resizable=0;points=[];autosize=1;strokeColor=none;fillColor=none;fontSize=16;" vertex="1" parent="1">
          <mxGeometry x="498" y="590" width="38" height="31" as="geometry" />
        </mxCell>
      </root>
    </mxGraphModel>
  </diagram>
</mxfile>
Uploading Diagramme sans nom.drawio…]()

